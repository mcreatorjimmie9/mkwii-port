/* Function at 0x8067AA54, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8067AA54(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8067AA68
    r29 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8067AA74
    r3 = r29 + 0x174; // 0x8067AA78
    r4 = r4 + 0; // 0x8067AA7C
    *(0 + r29) = r4; // stw @ 0x8067AA80
    FUN_8066D634(r4, r3, r4); // bl 0x8066D634
    r3 = r29 + 0x20c; // 0x8067AA88
    FUN_806A0418(r3, r4, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8067AA90
    /* lis r5, 0 */ // 0x8067AA94
    r3 = r29 + 0x380; // 0x8067AA98
    /* li r6, 0x174 */ // 0x8067AA9C
    r4 = r4 + 0; // 0x8067AAA0
    r5 = r5 + 0; // 0x8067AAA4
    /* li r7, 6 */ // 0x8067AAA8
    FUN_805E3430(r3, r6, r4, r5, r7); // bl 0x805E3430
}