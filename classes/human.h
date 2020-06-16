#ifndef HUMAN_H
#define HUMAN_H


class human
{
    public:
        human();
        virtual ~human();
        void setheight(double height);
        void setwieght(double wieght);
        double getheight();
        double getwieght();

    protected:

    private:
        double _height;
        double _wieght;
};

#endif // HUMAN_H
