/* Function at 0x806EAB8C, size=16 bytes */
/* Stack frame: 0 bytes */

int FUN_806EAB8C(int r3, int r4)
{
    /* slwi r0, r4, 2 */ // 0x806EAB8C
    r3 = r3 + r0; // 0x806EAB90
    *(8 + r3) = r5; // stw @ 0x806EAB94
    return;
}