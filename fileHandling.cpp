#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    string baris, myFile;
    string data[3] = {"Information", "Error", "Warning"};
    size_t awal=0;
    
    ifstream file;
    file.open("event_log_windows_1000.txt");
    while(!file.eof())
    {
        getline(file, baris);
        for(int i=0; i<3; i++)
        {
            if(baris.find(data[i])==awal)
            {
                ofstream output;
                myFile = data[i] + ".txt";
                output.open(myFile, ios_base::app);
                output<<baris<<endl;
                output.close();
            }
        }
    }
    file.close();
    
    return 0;
}
