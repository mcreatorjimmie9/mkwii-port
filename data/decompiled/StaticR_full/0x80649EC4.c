/* Function at 0x80649EC4, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_80649EC4(int r3, int r4, int r5, int r6)
{
    *(0x234 + r3) = r4; // stw @ 0x80649EC4
    r6 = r5;
    r5 = r3 + 0x220; // 0x80649ECC
    /* li r4, 0 */ // 0x80649ED0
    r3 = r3 + 0x174; // 0x80649ED4
    /* b 0x806692c4 */ // 0x80649ED8
}