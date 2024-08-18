import java.io.*;
public class newTextFile{
    public static void main(String args[]){
        String input="example.txt";
        String output="output.txt";
        try{
            BufferedReader reader=new BufferedReader(new FileReader(input));
            BufferedWriter writer=new BufferedWriter(new FileWriter(output));
            StringBuilder str=new StringBuilder();
            String line;
            while((line=reader.readLine())!=null){
                str.append(line.toUpperCase()).append("\n");
            }
            writer.write(str.toString());
            writer.close();
            reader.close();
        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
}
