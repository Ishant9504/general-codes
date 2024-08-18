import java.io.*;

public class mine{
    public static void main(String[] args){
        String filename="example.txt";
        String outfile="output.txt";
        try{
            BufferedReader reader=new BufferedReader(new FileReader(filename));
            BufferedWriter writer=new BufferedWriter(new FileWriter(outfile));

            StringBuilder str=new StringBuilder();
            String line;
            while((line=reader.readLine())!=null){
                str.append(line.toUpperCase()).append("\n");
            }
            writer.write(str.toString());
            reader.close();
            writer.close();

        }
        catch(IOException e){
            e.printStackTrace();
        }
    }
}