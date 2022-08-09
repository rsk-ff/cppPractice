#ifndef CD_H_
#define CD_H_
class Cd
{
private:
    char * performers;
    char * label;
    int selections;
    double playtime;
public:
    Cd(const char * s1 = "null", const char * s2 = "null", int n = 0, double x = 0);
    Cd(const Cd & d);
    //Cd(){};
    virtual ~Cd();
    virtual void Report() const;
    virtual Cd & operator=(const Cd & d);
};

class Classic: public Cd
{
private:
    char * works1;
    char * works2;
public:
    //Classic(){};
    Classic(const char * s1 = "null", const char * s2 = "null", const char * s3 = "null", const char * s4 = "null", int n = 0, double x = 0);
    ~Classic();
    void Report() const;
    Classic & operator=(const Classic & c);
};
#endif