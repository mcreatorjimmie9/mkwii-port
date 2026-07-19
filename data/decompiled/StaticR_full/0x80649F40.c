/* Function at 0x80649F40, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_80649F40(int r3, int r5, int r6)
{
    r5 = r3;
    r3 = *(0x1b0 + r3); // lwz @ 0x80649F44
    r5 = r5 + 0x174; // 0x80649F48
    /* li r6, -1 */ // 0x80649F4C
    /* b 0x8066b6b8 */ // 0x80649F50
}