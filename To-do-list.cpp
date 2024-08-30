#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Task {
    string description;
    bool completed;
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& description) {
        tasks.push_back({description, false});
        cout << "Task is added: " << description << endl;
    }

    void viewTasks() const {
        if (tasks.empty()) {
            cout << "No such tasks are available." << endl;
            return;
        }
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i].description<< " [" << (tasks[i].completed ? "Completed" : "Pending") << "]" << endl;
        }
    }

    void markTaskAsCompleted(size_t index) {
        if (index < 1 || index > tasks.size()) {
            cout << "Invalid task number." <<endl;
            return;
        }
        tasks[index - 1].completed = true;
        cout << "Task is completed: " << tasks[index - 1].description <<endl;
    }

    void removeTask(size_t index) {
        if (index < 1 || index > tasks.size()) {
            cout << "Invalid task number." <<endl;
            return;
        }
        cout << "Task is been removed: " << tasks[index - 1].description <<endl;
        tasks.erase(tasks.begin() + index - 1);
    }
};

int main() {
    ToDoList toDoList;
    int choice;
    string description;
    size_t taskNumber;

    do {
        cout << "\nTo-Do List Manager\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cin.ignore(); 
                cout << "Enter task description: ";
                getline(cin, description);
                toDoList.addTask(description);
                break;

            case 2:
                toDoList.viewTasks();
                break;

            case 3:
                cout << "Enter task number to mark as completed: ";
                cin >> taskNumber;
                toDoList.markTaskAsCompleted(taskNumber);
                break;

            case 4:
                cout << "Enter task number to remove: ";
                cin >> taskNumber;
                toDoList.removeTask(taskNumber);
                break;

            case 5:
                cout << "Exiting the program." <<endl;
                break;

            default:
                cout << "Invalid choice. Please try again." <<endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
