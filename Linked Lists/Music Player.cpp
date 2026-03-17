#include <iostream>
using namespace std;

struct Node {
    int songID;
    Node* next;
    Node* prev;

    Node(int id): songID(id), next(nullptr), prev(nullptr) {}
};

class MusicPlayer{
public:
    Node* head;
    Node* tail;
    Node*currentSong;

    MusicPlayer(){
        head = NULL;
        tail = NULL;
        currentSong= NULL;
    }

    void addSong(int songID){
        Node* newNode = new Node(songID);
        if (head== NULL){
            head = newNode;
            tail = newNode;
            currentSong= newNode;
            return;
        }

        else {
            tail -> next = newNode;
            newNode-> prev = tail;
            tail = newNode;
        }
    }

    void playNext(){
        currentSong = currentSong->next;
    }

    void playPrev(){
        currentSong = currentSong->prev;
    }

    void switchSong(int songID){
        Node* iter = head;
        while(iter!=NULL){
            if (iter->songID == songID){
                currentSong= iter;
                return;
            }

            iter = iter->next;
        }
    }
    int current(){
        return currentSong->songID;
    }
};

int main(){
    int N;
    cin >> N;

    MusicPlayer player;

    while(N--){

        int type;
        cin >> type;

        if(type == 1){
            int songId;
            cin >> songId;
            player.addSong(songId);
        }

        else if(type == 2){
            player.playNext();
        }

        else if(type == 3){
            player.playPrev();
        }

        else if(type == 4){
            int songId;
            cin >> songId;
            player.switchSong(songId);
        }

        else if(type == 5){
            cout << player.current() << endl;
        }
    }
}