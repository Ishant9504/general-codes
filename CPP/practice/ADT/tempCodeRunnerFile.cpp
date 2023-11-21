void display(Stack *s){
    int i=s->top;
    cout<<"Element of stack is:";
    while(i!=-1){
        cout<<s->arr[i]<<" ";
        i--;
    }
    cout<<endl;
}