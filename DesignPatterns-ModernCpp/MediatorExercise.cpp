//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct IParticipant
//{
//    virtual void notify(IParticipant* sender, int value) = 0;
//};
//
//struct Mediator
//{
//    vector<IParticipant*> participants;
//    void say(IParticipant* sender, int value)
//    {
//        for (auto p : participants)
//            p->notify(sender, value);
//    }
//};
//
//struct Participant : IParticipant
//{
//    int value{ 0 };
//    Mediator& mediator;
//
//    Participant(Mediator& mediator) : mediator(mediator)
//    {
//        mediator.participants.push_back(this);
//    }
//
//    void notify(IParticipant* sender, int value) override {
//        if (sender != this)
//            this->value += value;
//    }
//
//    void say(int value)
//    {
//        mediator.say(this, value);
//    }
//};
//
//int main()
//{
//    Mediator m;
//    Participant p1{ m }, p2{ m };
//
//    cout << "p1: " << p1.value << " == 0 ?" << endl;
//    cout << "p2: " << p2.value << " == 0 ?" << endl;
//
//    cout << "p1 say 2" << endl;
//    
//    p1.say(2);
//    
//    cout << "p1: " << p1.value << " == 0 ?" << endl;
//    cout << "p2: " << p2.value << " == 2 ?" << endl;
//
//
//
//
//
//    cout << "p2 say 4" << endl;
//
//    p2.say(4);
//
//    cout << "p1: " << p1.value << " == 4 ?" << endl;
//    cout << "p2: " << p2.value << " == 2 ?" << endl;
//
//
//    return 0;
//}