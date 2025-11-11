#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{ 
cout << "Kimetsu no Yaiba: Infinity Castle Battle Simulator" << endl;
cout << "Parameter:       | Description:" << endl;
cout << "slayerLevel      | Demon slayer's level (1-10)." << endl;
cout << "hp               | Current health points of the demon slayer." << endl;
cout << "breathingMastery | Breathing Technique mastery level (0.0-1.0)." << endl;
cout << "hasTalisman      | Indicates if the slayer has a talisman to open the gate (0: no, 1: yes)." << endl;
cout << "timeOfDay        | Time of day, D = daytime, N = night." << endl;
cout << "demonPresence    | Indicates if a demon is present at the gate (0: no, 1: yes)." << endl;
cout << "demonRank        | Rank of the Upper Moon (1-6)." << endl;
cout << "swordSharpness   | Sharpness of the Nichirin sword (0-100)." << endl;
cout << "allyCount        | Number of allies assisting in battle." << endl;
cout << "bossHP           | Initial HP of the boss in Infinity Castle." << endl;
cout << "totalDamage      | Total damage dealt by the slayer during the fight." << endl;
cout << "specialMoveReady | Indicates if the ultimate move is ready (0: not ready, 1: ready)." << endl;
cout << "power            | The total power index of the demon slayer." << endl;
cout << "adv              | The battle advantage index." << endl;
cout << "[Scene 1] Power Classification" << endl;
cout << "[Scene 2] The Infinity Castle Gate" << endl;
cout << "[Scene 3] Battle Strategy" << endl;
cout << "[Scene 4] Final Outcome" << endl;
cout << "Note: Enter all parameters on the same line, separated by spaces. (Example: 8 950 0.8 1 N 1 3 72.5 2 420 380 1)" << endl;
cout << "Syntax: slayerLevel | hp | breathingMastery | hasTalisman | timeOfDay | demonPresence | demonRank | swordSharpness | allyCount | bossHP | totalDamage | specialMoveReady" << endl;

int slayerLevel, hp, hasTalisman, demonPresence, demonRank, allyCount, bossHP, totalDamage, specialMoveReady, finalHP;
double breathingMastery, swordSharpness;
char timeOfDay;
string rank, gate, strat, out;

cin >> slayerLevel >> hp >> breathingMastery >> hasTalisman >> timeOfDay >> demonPresence >> demonRank
>> swordSharpness >> allyCount >> bossHP >> totalDamage >> specialMoveReady;

double power = slayerLevel * 10 + hp / 10 + breathingMastery * 50, adv = (101 - demonRank * 15) + swordSharpness * 0.4 + allyCount * 5;

// Scene 1: Power Classification
if (power >= 120)
{
    rank = "Hashira";
}
else if (power >= 80 && power < 120)
{
    rank = "Elite";
}
else
{
    rank = "Novice";
}

// Scene 2: The Infinity Castle Gate
if (hasTalisman == 0)
{
    gate = "Denied: No talisman";
}
else if (timeOfDay != 'N' && timeOfDay != 'D')
{
    gate = "Warning: invalid timeOfDay";
}
else if (timeOfDay == 'N' && demonPresence == 1)
{
    gate = "silently";
}
else
{
    gate = "cautiously";
}

// Scene 3: Battle Strategy
if (adv >= 100)
{
    strat = "Engage head on";
}
else if (adv >= 60 && adv < 100)
{
    strat = "Harass and probe";
}
else
{
    strat = "Retreat and regroup";
}

// Scene 4: Final Outcome
if (finalHP <= 0)
{
    out = "Boss defeated!";
    finalHP = 0;
}
else if (finalHP > 0 && specialMoveReady == 1 && finalHP <= 50)
{
    out = "Use special move to finish!";
}
else
{
    out = "Withdraw to heal.";
}

cout << "[Scene 1] Rank: " << rank << " (power = " << fixed << setprecision(1) << power << ")" << endl;
cout << "[Scene 2] Open " << gate << "." << endl;
cout << "[Scene 3] " << strat << " (adv = " << fixed << setprecision(1) << adv << ")" << endl;
cout << "[Scene 4] " << out << " (finalHP = " << finalHP << ")" << endl;

cin;
return 0;
}