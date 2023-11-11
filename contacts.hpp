//This is my header file for my class declaratins


class contact{
    public:
    contact();
    contact(char*);
    void changefirstName();
    void changelastName();
    void changeNumber();
    void changeEmail();
    void changeAge();
    private:
    char* firstn;
    char* lastn;
    int age;
    int phnumber;
    char* email;
    

};