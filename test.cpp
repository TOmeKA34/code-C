// นำเข้าไลบรารี่ที่จำเป็น (เหมือนการเรียกใช้เครื่องมือต่างๆ)
#include <iostream> // สำหรับการแสดงผลบนหน้าจอ (เช่น cout)
#include <vector>   // สำหรับใช้ vector (ตัวแปรที่เก็บข้อมูลหลายๆ ค่า)
#include <string>   // สำหรับใช้ string (ตัวแปรที่เก็บข้อความ)

// ใช้ namespace std เพื่อไม่ต้องพิมพ์ std:: หน้าคำสั่งต่างๆ
using namespace std;

// ฟังก์ชันหลัก - จุดเริ่มต้นของโปรแกรม
int main()
{
    // สร้างตัวแปร msg ที่เป็น vector (กล่องเก็บข้อความหลายๆ คำ)
    // เก็บคำว่า "Hello", "C++", "World", "from", "VS Code", "and the C++ extension!ttt"
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!ttt"};

    // วนลูปเพื่อเอาคำแต่ละคำใน msg มาแสดงผล
    // for loop จะทำงานซ้ำๆ จนกว่าจะหมดคำใน msg
    for (const string &word : msg)
    {
        // แสดงผลคำแต่ละคำ ตามด้วยช่องว่าง
        cout << word << " ";
    }

    // แสดงผลการขึ้นบรรทัดใหม่ (เหมือนกดปุ่ม Enter)
    cout << endl;

    // คืนค่า 0 บอกว่าโปรแกรมทำงานสำเร็จ
    return 0;
}
