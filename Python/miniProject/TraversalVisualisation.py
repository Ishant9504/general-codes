import networkx as nx
import matplotlib.pyplot as plt
import time

def visualize_search(shortest_paths, title, G, pos, source_node, target_node=None):
    plt.figure()
    plt.title(title)
    plt.text(-0.9, 0.9, f"Minimum distances from node {source_node}:\n{shortest_paths}", verticalalignment='top')
    nx.draw(G, pos, with_labels=True, node_color='g')
    plt.pause(0.5)

    if target_node is not None:
        # Highlight the shortest path to the target node
        path = nx.shortest_path(G, source=source_node, target=target_node)
        highlighted_edges = [(path[j], path[j+1]) for j in range(len(path)-1)]
        edge_colors = ['b' if edge in highlighted_edges else 'k' for edge in G.edges()]
        
        nx.draw_networkx_edges(G, pos, edgelist=G.edges(), edge_color=edge_colors, width=1)
        plt.title(title)
        plt.text(-0.9, 0.9, f"Minimum distances from node {source_node}:\n{shortest_paths}", verticalalignment='top')
        plt.pause(0.5)

    plt.show()

def random_connected_graph(n, m):
    while True:
        G = nx.gnm_random_graph(n, m)
        if nx.is_connected(G):
            return G

G = random_connected_graph(30, 20)
pos = nx.spring_layout(G)

# Source node (start node)
source_node = 0

# Perform Dijkstra's algorithm from the source node
shortest_paths = nx.single_source_dijkstra_path_length(G, source=source_node)

# Visualize shortest paths and highlight path to node 12
visualize_search(shortest_paths, 'Dijkstra\'s Algorithm Visualization', G, pos, source_node, target_node=12)
