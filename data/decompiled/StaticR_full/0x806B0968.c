/* Function at 0x806B0968, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_806B0968(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806B0974
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806B0980
    /* lis r4, 0 */ // 0x806B0984
    r3 = r3 + 0; // 0x806B0988
    *(0 + r31) = r3; // stw @ 0x806B098C
    /* lis r7, 0 */ // 0x806B0990
    r4 = r4 + 0; // 0x806B0994
    r6 = *(0 + r7); // lwzu @ 0x806B0998
    r3 = r31 + 0x58; // 0x806B099C
    *(8 + r1) = r6; // stw @ 0x806B09A0
    r5 = *(4 + r7); // lwz @ 0x806B09A4
    r0 = *(8 + r7); // lwz @ 0x806B09A8
    *(0xc + r1) = r5; // stw @ 0x806B09AC
    *(0x10 + r1) = r0; // stw @ 0x806B09B0
    *(0x44 + r31) = r4; // stw @ 0x806B09B4
    *(0x48 + r31) = r31; // stw @ 0x806B09B8
    *(0x4c + r31) = r6; // stw @ 0x806B09BC
    *(0x50 + r31) = r5; // stw @ 0x806B09C0
    *(0x54 + r31) = r0; // stw @ 0x806B09C4
    FUN_80668134(); // bl 0x80668134
    r3 = r31 + 0x6c; // 0x806B09CC
    FUN_8064ED04(r3); // bl 0x8064ED04
    r3 = r31 + 0x78; // 0x806B09D4
    FUN_8064EE0C(r3, r3); // bl 0x8064EE0C
    r3 = r31 + 0x290; // 0x806B09DC
    FUN_8066D634(r3, r3, r3); // bl 0x8066D634
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x806B09E8
    r0 = *(0x24 + r1); // lwz @ 0x806B09EC
    return;
}