/* Function at 0x805CE850, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805CE850(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x805CE858
    /* li r6, 0x1c */ // 0x805CE85C
    *(0x24 + r1) = r0; // stw @ 0x805CE860
    r4 = r4 + 0; // 0x805CE864
    /* li r7, 0xc */ // 0x805CE868
    *(0x1c + r1) = r31; // stw @ 0x805CE86C
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805CE874
    /* lis r30, 0 */ // 0x805CE878
    r5 = r30 + 0; // 0x805CE87C
    *(0x14 + r1) = r29; // stw @ 0x805CE880
    /* lis r29, 0 */ // 0x805CE884
    *(0 + r3) = r4; // stw @ 0x805CE888
    r4 = r29 + 0; // 0x805CE88C
    r3 = r3 + 8; // 0x805CE890
    FUN_805E3430(r4, r3); // bl 0x805E3430
}