// 地区信息结构体
typedef struct {
    char code[3];         // 地区代码（如"00", "02"等）
    char name[100];       // 地区名称
} State;

// 国家信息结构体
typedef struct {
    char code[3];         // 国家代码（如"JP", "AI"等）
    int state_count;      // 地区数量
    State* states[256];   // 地区数组
} StatesInfo;

// 声明所有国家数据（在.c文件中定义）
extern StatesInfo all_states[];