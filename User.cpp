#include "User.h"

using namespace std;

user::user()
{
    name = "Default";
    surname = "Default";
    id = 0;
    age = 0;
    weight = 0, 0;
    height = 0, 0;
    totalCalories = 0;
    burnedCalories = 0;
    date = 0;
}
user::user(string n, string s, int i, int a, float w, float h, int t, int b, int d)
{
    name = n;
    surname = s;
    id = i;
    age = a;
    weight = w;
    height = h;
    totalCalories = t;
    burnedCalories = b;
    date = d;
}
user::user(const user &obj)
{
    this->name = obj.name;
    this->surname = obj.surname;
    this->id = obj.id;
    this->age = obj.age;
    this->weight = obj.weight;
    this->height = obj.height;
    this->totalCalories = obj.totalCalories;
    this->burnedCalories = obj.burnedCalories;
    this->date = obj.date;
    for (int i = 0; i < 7; i++)
    {
        this->breakfast[i] = obj.breakfast[i];
        this->lunch[i] = obj.lunch[i];
        this->dinner[i] = obj.dinner[i];
        this->basketball[i] = obj.basketball[i];
        this->swimming[i] = obj.swimming[i];
        this->tennis[i] = obj.tennis[i];
        this->football[i] = obj.football[i];
    }
}
user &user::operator=(const user &obj)
{
    this->name = obj.name;
    this->surname = obj.surname;
    this->id = obj.id;
    this->age = obj.age;
    this->weight = obj.weight;
    this->height = obj.height;
    this->totalCalories = obj.totalCalories;
    this->burnedCalories = obj.burnedCalories;
    this->date = obj.date;
    for (int i = 0; i < 7; i++)
    {
        this->breakfast[i] = obj.breakfast[i];
        this->lunch[i] = obj.lunch[i];
        this->dinner[i] = obj.dinner[i];
        this->basketball[i] = obj.basketball[i];
        this->swimming[i] = obj.swimming[i];
        this->tennis[i] = obj.tennis[i];
        this->football[i] = obj.football[i];
    }
    return *this;
}
user &user::operator+(const user &obj)
{
    this->name += obj.name;
    this->surname += obj.surname;
    this->id += obj.id;
    this->age += obj.age;
    this->weight += obj.weight;
    this->height += obj.height;
    this->totalCalories += obj.totalCalories;
    this->burnedCalories += obj.burnedCalories;
    this->date += obj.date;
    for (int i = 0; i < 7; i++)
    {
        this->breakfast[i] + obj.breakfast[i];
        this->lunch[i] + obj.lunch[i];
        this->dinner[i] + obj.dinner[i];
        this->basketball[i] + obj.basketball[i];
        this->swimming[i] + obj.swimming[i];
        this->tennis[i] + obj.tennis[i];
        this->football[i] + obj.football[i];
    }
    return *this;
}
ostream &operator<<(ostream &out, const user &obj)
{
    out << "User's information :"
        << "\n\tname: " << obj.getName()
        << "\n\tsurname: " << obj.getSurname()
        << "\n\tID: " << obj.getId()
        << "\n\tage: " << obj.getAge()
        << "\n\tWeight: " << obj.getWeight()
        << "\n\tHeight: " << obj.getHeight() << endl
        << endl;
    return out;
}

string user::getName() const { return name; }
string user::getSurname() const { return surname; }
int user::getId() const { return id; }
int user::getAge() const { return age; }
float user::getWeight() const { return weight; }
float user::getHeight() const { return height; }
int user::getTotal() const { return totalCalories; }
int user::getBurned() const { return burnedCalories; }
int user::getDate() const { return date; }
void user::setName(string b) { name = b; }
void user::setDate(int x) { date = x; }
void user::setSurname(string m) { surname = m; }
void user::setId(int z) { id = z; }
void user::setAge(int d) { age = d; }
void user::setWeight(float h) { weight = h; }
void user::setHeight(float y) { height = y; }
void user::setTotal(int u) { totalCalories = u; }
void user::setBurned(int w) { burnedCalories = w; }
int ask()
{
    int a;
    cout << "\tDo you want to add another? \n\t[1] yes\t[0] no \n\t?";
    cin >> a;
    return a;
}

void user::USERmode()
{
    // string n,  s;
    // float w,  h;
    // int i,  a, t,  b,  d;
    cout << "You are welcome  my friend. \nThis program works as a Calorie Tracker"
         << endl
         << "NOw, i will want your personal information. \n\n";

    cout << endl
         << "Enter your name ...:";
	cin.ignore(40,'\n');
 	getline(cin, name);	
    cout << endl
         << "Enter your surname ...:";
    cin >> surname;
    cout << endl
         << "Enter your id ...:";
    cin >> id;
    cout << endl
         << "Enter your age ...:";
    cin >> age;
    cout << endl
         << "Enter your weight(kg) ...:";
    cin >> weight;
    cout << endl
         << "Enter your height(cm) ...:";
    cin >> height;
    cout << endl
         << "Enter the week number...:";
    cin >> date;

    for (int i = 0; i < 7; i++)
    {
        cout << "\tThis part deal " << i + 1 << ". day of the " << date << ". week." << endl
             << endl;
        cout << "\tSet Calories of " << i + 1 << ". day" << endl;
        int switch_on;
        cout << "\tWhat meals did you have in this day?\n\t[1]  FOR Breakfast and Dinner " << endl
             << "\t[2]  FOR Lunch and Dinner \n\t[3]  FOR Breakfast, Lunch and Dinner \n";
        cin >> switch_on;
        switch (switch_on)
        {
        case 1:
            cout << endl
                 << "BREAKFAST:";
            breakfast[i].chooser();
            cout << endl
                 << "DINNER:";
            dinner[i].chooser();
            break;
        case 2:
            cout << endl
                 << "LUNCH:";
            lunch[i].chooser();
            cout << endl
                 << "DINNER:";
            dinner[i].chooser();
            break;
        case 3:
            cout << endl
                 << "BREAKFAST:";
            breakfast[i].chooser();
            cout << endl
                 << "LUNCH:";
            lunch[i].chooser();
            cout << endl
                 << "DINNER:";
            dinner[i].chooser();
            break;
        default:
            break;
        }
        totalCalories += breakfast[i].getCalorie() + lunch[i].getCalorie() + dinner[i].getCalorie();
        cout << "\tYou got " << totalCalories << " kcal calories in " << i + 1 << " days." << endl;
        cout << "\n\n\tSet sports of " << i + 1 << ".day" << endl;
        cout << "\tWhat sports did you have in this day?" << endl;
        bool fl = true;
        int time;
        while (fl)
        {
            cout << "\n\t[1]  FOR Basketball "
                 << "\n\t[2]  FOR Football \n\t[3]  FOR Tennis \n\t[4]  FOR Swimming\n";
            cin >> switch_on;
            switch (switch_on)
            {
            case 1:
                // cout << "Enter how many minutes you played basketball ...:";
                // cin >> time;
                cout << "BASKETBALL:" << endl;
                basketball[i].timer();
                if (!ask())
                    fl = false;
                break;
            case 2:
                // cout << "Enter how many minutes you played football ...:";
                // cin >> time;
                cout << "FOOTBALL:" << endl;
                football[i].timer();
                if (!ask())
                    fl = false;
                break;
            case 3:
                // cout << "Enter how many minutes you played tennis ...:";
                // cin >> time;
                cout << "TENNIS:" << endl;
                tennis[i].timer();
                if (!ask())
                    fl = false;
                break;
            case 4:
                // cout << "Enter how many minutes you played swimming ...:";
                // cin >> time;
                cout << "SWIMMING:" << endl;
                swimming[i].timer();
                if (!ask())
                    fl = false;
                break;
            }
        }
        burnedCalories = basketball[i].getCalories() + football[i].getCalories() + tennis[i].getCalories() + swimming[i].getCalories();
        cout << "\tYou burned " << burnedCalories << " kcal calories in" << i + 1 << " days." << endl;
    }
    // cout << "\nNow, i will show your istatistic.\n\n\n";
    // int b = breakfast[0].blarge + breakfast[0].bmedium + breakfast[0].bsmall;
    // int d = dinner[0].dlarge + dinner[0].dmedium + dinner[0].dsmall;
    // int l = lunch[0].llarge + lunch[0].lmedium + lunch[0].lsmall;
    // cout << "You had breakfast " << b << " times this week\n";
    // cout << "You had lunch " << l << " times this weekn\n";
    // cout << "You had dinner " << d << " times this week\n";
    // cout << "You played basketball " << basketball[0].bcounter << " times this week\n";
    // cout << "You played football " << football[0].fcounter << " times this week\n";
    // cout << "You played tennis " << tennis[0].tcounter << " times this week\n";
    // cout << "You played swimming " << swimming[0].scounter << " times this week\n";
    // cout << "You got " << totalCalories << " kcal  this week\n";
    // cout << "You burned " << burnedCalories << " kcal  this week\n";
}
void user::istatistic()
{
    cout << "\nNow, i will show your istatistic.\n\n\n";
    int b = breakfast[0].blarge + breakfast[0].bmedium + breakfast[0].bsmall;
    int d = dinner[0].dlarge + dinner[0].dmedium + dinner[0].dsmall;
    int l = lunch[0].llarge + lunch[0].lmedium + lunch[0].lsmall;
    cout << "You had breakfast " << b << " times this week\n";
    cout << "You had lunch " << l << " times this weekn\n";
    cout << "You had dinner " << d << " times this week\n";
    cout << "You played basketball " << basketball[0].bcounter << " times this week\n";
    cout << "You played football " << football[0].fcounter << " times this week\n";
    cout << "You played tennis " << tennis[0].tcounter << " times this week\n";
    cout << "You played swimming " << swimming[0].scounter << " times this week\n";
    cout << "You got " << totalCalories << " kcal  this week\n";
    cout << "You burned " << burnedCalories << " kcal  this week\n";
}
void user::DEVELEPORmode()
{
}
