/* Function at 0x8067F4F4, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_8067F4F4(int r3, int r4)
{
    /* slwi r4, r4, 4 */ // 0x8067F4F4
    /* li r0, 0 */ // 0x8067F4F8
    r3 = r3 + r4; // 0x8067F4FC
    *(4 + r3) = r5; // stw @ 0x8067F500
    *(0xc + r3) = r0; // stw @ 0x8067F504
    return;
}