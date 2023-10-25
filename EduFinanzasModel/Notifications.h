using namespace System;
namespace EduFinanzasModel {
public ref class Notifications {
private: 
    bool Enabled;
    String^ Type;
    String^ Message;
public:
    Notifications();
    Notifications(bool Enabled, String^ Type, String^ Message);

};
}
