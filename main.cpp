#include <iostream.h>
#include <ctime.h>

class block{
  public:
    constructor (index, data, timestamp, hash, prevHash = " "){
        this.index = index;
        this.data = data;
        this.timestamp = timestamp;
        this.hash = calculateHash();
        this.prevHash = prevHash;
    }

    calculateHash(){
        
    }

}

class blockchain{
    public:
    constructor (){
        this.chain = [];
    }

    createGenesis(){
        return block(0, "Genesis Block", getTime(), "0")
    }
    
    getTime(){
        // current date/time based on current system
        time_t now = time(0);
 
        // convert now to string form
        char* dt = ctime(&now);

        // convert now to tm struct for UTC
        tm *gmtm = gmtime(&now);
        dt = asctime(gmtm);
        return dt;
    }

    getLatestBlock(){
        return this.chain[this.chain.length - 1];
    }

    addBlock(){
        return this.chain[this.chain.lenght + 1] = block(block.index + 1, getData(), getTime(), this->getLatestBlock().hash)
    }

    getData(){
        string fullnameT, fullnameR;
        unsigned int amount;

        cout << "Who does the transfer?  \n";
        cin >> fullnameT;

        cout << "Who is the reciever? \n";
        cin >> fullnameR;

        cout << "What is the amount being transfered? \n"
        cin >> amount;

        message();

    }

    message(){
        string text;

        cout << "Transfer Message \n";
        cin >> text;

        if text == " "{break;}
        else {return text;}
    }
}