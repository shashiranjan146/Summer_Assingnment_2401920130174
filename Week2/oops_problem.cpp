#include <iostream>
using namespace std;
namespace music
{

    class Playable
    {
    public:
        virtual void play() = 0; 
        virtual ~Playable() {}
    };
    namespace string_instrument
    {

        class Veena : public Playable
        {
        public:
            void play() override
            {
                cout << "Playing Veena" << endl;
            }
        };

    }

    namespace wind
    {

        class Saxophone : public Playable
        {
        public:
            void play() override
            {
                cout << "Playing Saxophone" << endl;
            }
        };

    }
}

namespace live
{

    void Test()
    {
        music::string_instrument::Veena v;
        v.play();
        music::wind::Saxophone s;
        s.play();
        music::Playable *p;
        p = &v;
        p->play();
        p = &s;
        p->play();
    }

}

int main()
{
    live::Test();
    return 0;
}