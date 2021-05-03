#ifndef CLASS_H
#define CLASS_H

using namespace std;

class MenuItem
{
  private:
    //string name;
    //double itemCost; 
    //string desc; 
    //char addLetter; 
    //char removeLetter;
    //int count;
  public:
    string name;
    string desc; 
    double itemCost; 
    char addLetter; 
    char removeLetter;
    int count;

  // establish setters
    void setName(string n)        { name = n; }
    void setDesc(string d)        { desc = d; }
    void setItemCost(double ic)   { itemCost = ic; }
    void setAddLetter(char al)    { addLetter = al; }
    void setRemoveLetter(char rl) { removeLetter = rl; }
    void setCount(int c)          { count = c; }

  // establish getters
    string getName()        const { return name; }
    string getDesc()        const { return desc; }
    double getItemCost()    const { return itemCost; }
    char getAddLetter()     const { return addLetter; }
    char getRemoveLetter()  const { return removeLetter; }
    int getCount()          const { return count; }

};

#endif
