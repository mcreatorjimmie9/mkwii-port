/* Function at 0x80677820, size=104 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80677820(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x28 + r1) = r30; // stw @ 0x80677830
    r30 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x8067783C
    r3 = r30 + 0x48; // 0x80677840
    r4 = r4 + 0; // 0x80677844
    *(0 + r30) = r4; // stw @ 0x80677848
    FUN_8066880C(r4, r3, r4); // bl 0x8066880C
    r31 = r30 + 0x190; // 0x80677850
    r3 = r31;
    FUN_806A0418(r4, r3); // bl 0x806A0418
    /* lis r3, 0 */ // 0x8067785C
    /* lis r4, 0 */ // 0x80677860
    r3 = r3 + 0; // 0x80677864
    /* lis r5, 0 */ // 0x80677868
    *(0 + r31) = r3; // stw @ 0x8067786C
    r3 = r30 + 0x304; // 0x80677870
    r4 = r4 + 0; // 0x80677874
    r5 = r5 + 0; // 0x80677878
    /* li r6, 0x1b8 */ // 0x8067787C
    /* li r7, 0xc */ // 0x80677880
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
}