#include <iostream>
using namespace std;

int main()
{
    int carry=4;
    for(int AA=0;AA<carry;AA++)
    {
        for(int BA=0;BA<carry;BA++)
        {
            for(int BB=0;BB<carry;BB++)
            {
                for(int BC=0;BC<carry;BC++)
                {
                    for(int BD=0;BD<carry;BD++)
                    {
                        for(int CA=0;CA<carry;CA++)
                        {
                            for(int CB=0;CB<carry;CB++)
                            {
                                for(int CC=0;CC<carry;CC++)
                                {
                                    for(int CD=0;CD<carry;CD++)
                                    {
                                        for(int DA=0;DA<carry;DA++)
                                        {
                                            for(int DB=0;DB<carry;DB++)
                                            {
                                                for(int DC=0;DC<carry;DC++)
                                                {
                                                    if(AA!=BA && AA!=BB && AA!=BC && AA!=BD && BA!=BB && BA!=BD && BA!=CA && BA!=CB && BC!=BB && BC!=BD && BC!=CD && BC!=CC && CA!=CB && CA!=CD && CA!=BD && CA!=DC && CA!=DA && CC!=CD && CC!=BB && CC!=CB && CC!=DA && CC!=DB && CB!=BB && CB!=DA && CD!=BD && CD!=DB && CD!=DC && DA!=DB && DA!=DC && DB!=DC)
                                                    {
                                                        cout<<AA<<BA<<BB<<BC<<BD<<CA<<CB<<CC<<CD<<DA<<DB<<DC<<endl;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<"done";
    return 0;
}
