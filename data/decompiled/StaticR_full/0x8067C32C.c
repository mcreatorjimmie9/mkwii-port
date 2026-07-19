/* Function at 0x8067C32C, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8067C32C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8067C340
    r29 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8067C34C
    r3 = r29 + 0x174; // 0x8067C350
    r4 = r4 + 0; // 0x8067C354
    *(0 + r29) = r4; // stw @ 0x8067C358
    FUN_8066D634(r4, r3, r4); // bl 0x8066D634
    r3 = r29 + 0x20c; // 0x8067C360
    FUN_806A0418(r3, r4, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8067C368
    /* lis r5, 0 */ // 0x8067C36C
    r3 = r29 + 0x380; // 0x8067C370
    /* li r6, 0x174 */ // 0x8067C374
    r4 = r4 + 0; // 0x8067C378
    r5 = r5 + 0; // 0x8067C37C
    /* li r7, 6 */ // 0x8067C380
    FUN_805E3430(r3, r6, r4, r5, r7); // bl 0x805E3430
}