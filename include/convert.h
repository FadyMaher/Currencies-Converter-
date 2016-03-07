#ifndef CONVERT_H
#define CONVERT_H


class convert
{
    public:
        convert();
        convert(int f , int t, float a);
        void setEquivalence();
        float getEquivalence();

    protected:

    private:
        int from , to;
        float amount;
        float rate;
        float equivalence;
};

#endif // CONVERT_H
