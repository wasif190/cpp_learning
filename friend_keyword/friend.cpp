#include<iostream>
#include<vector>
#include<string>
using namespace std;

class AI {
    private:
        string name;
        int credits;

    public:
        AI(string aName, int cred): name(aName), credits(cred) {}

        friend bool compareCredits(const AI &ai1,const AI &ai2);

        void display() const {
            cout << "AI Name: " << name << endl;
        }
};

bool compareCredits(const AI &ai1, const AI &ai2){
    return ai1.credits > ai2.credits;
}

int main() {
    AI openAI("chatGPT", 4);
    AI anotherAI("perplexity", 5);

    openAI.display();
    anotherAI.display();

    if (compareCredits(openAI, anotherAI)) {
        cout << "Open AI provides more credits!" << endl;
    } else {
        cout << "Open AI providing less credits!" << endl;
    }

    return 0;
}