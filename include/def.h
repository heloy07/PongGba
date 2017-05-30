//define object attribute memory state address
#define SpriteMem ((unsigned short*)0x7000000)

//define object attribute memory image address
#define SpriteData ((unsigned short*)0x6010000)

//define object attribute memory palette address
#define SpritePal ((unsigned short*)0x5000200)

//misc sprite constants
#define OBJ_MAP_2D 0x0
#define OBJ_MAP_1D 0x40
#define OBJ_ENABLE 0x1000


/*#define KEY_DOWN_NOW(key)  (~(REG_KEYINPUT) & key)

#define KEY_A        0x0001
#define KEY_B        0x0002
#define KEY_SELECT   0x0004
#define KEY_START    0x0008
#define KEY_RIGHT    0x0010
#define KEY_LEFT     0x0020
#define KEY_UP       0x0040
#define KEY_DOWN     0x0080
#define KEY_R        0x0100
#define KEY_L        0x0200

#define KEY_MASK     0x03FF

#define INT_BUTTON 0x1000*/

volatile unsigned int *BUTTONS = (volatile unsigned int *)0x04000130;

#define BUTTON_A 1<<0
#define BUTTON_B 1<<1
#define BUTTON_START 1<<3
#define BUTTON_RIGHT 1<<4
#define BUTTON_LEFT 1<<5
bool buttons[10];







//Timer masks and addresses

#define TIMER_OVERFLOW 0x4
#define TIMER_IRQ_ENABLE 0x40
#define TIMER_ENABLE 0x80

#define TIMER_FREQUENCY_SYSTEM	0x0
#define TIMER_FREQUENCY_64	0x1
#define TIMER_FREQUENCY_256	0x2
#define TIMER_FREQUENCY_1024	0x3

#define REG_TM0CNT *(volatile u16*)0x4000102
#define REG_INTERRUPT	*(u32*)0x3007FFC
#define INT_TIMER0 	0x0008


#define SIZE_8 0x0
#define SIZE_16 0x4000
#define SIZE_32 0x8000
#define SIZE_64 0xC000
#define RECT_H 0x4000
#define COLOR_256 0x2000
