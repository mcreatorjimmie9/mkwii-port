/* Function at 0x8066200C, size=36 bytes */
/* Stack frame: 0 bytes */

int FUN_8066200C(int r3, int r4, int r5, int r6)
{
    /* li r6, 0xc */ // 0x8066200C
    r0 = r4 rlwinm 2; // rlwinm
    /* subfc r6, r6, r5 */ // 0x80662014
    r4 = r5 + 0x25ee; // 0x80662018
    /* subfe r5, r6, r6 */ // 0x8066201C
    r3 = r3 + r0; // 0x80662020
    r0 = r4 & r5; // 0x80662024
    *(0x8c + r3) = r0; // stw @ 0x80662028
    return;
}