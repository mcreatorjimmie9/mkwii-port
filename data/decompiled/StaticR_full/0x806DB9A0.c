/* Function at 0x806DB9A0, size=276 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806DB9A0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r30, 0 */ // 0x806DB9B4
    r30 = r30 + 0; // 0x806DB9B8
    *(0x34 + r1) = r29; // stw @ 0x806DB9BC
    r29 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806DB9C8
    r3 = r29;
    r4 = r4 + 0; // 0x806DB9D0
    *(0 + r29) = r4; // stw @ 0x806DB9D4
    r12 = *(0 + r29); // lwz @ 0x806DB9D8
    r12 = *(0x3c + r12); // lwz @ 0x806DB9DC
    /* mtctr r12 */ // 0x806DB9E0
    /* bctrl  */ // 0x806DB9E4
    /* lis r4, 0 */ // 0x806DB9E8
    r3 = r29 + 0x1b4; // 0x806DB9EC
    r4 = r4 + 0; // 0x806DB9F0
    *(0 + r29) = r4; // stw @ 0x806DB9F4
    FUN_806690C4(r4, r3, r4); // bl 0x806690C4
    r3 = r30 + 0; // 0x806DB9FC
    r31 = *(0 + r30); // lwz @ 0x806DBA00
    r12 = *(4 + r3); // lwz @ 0x806DBA04
    /* lis r10, 0 */ // 0x806DBA08
    r11 = *(8 + r3); // lwz @ 0x806DBA0C
    *(0x248 + r29) = r11; // stw @ 0x806DBA14
    r5 = r30 + 0xc; // 0x806DBA18
    r4 = r30 + 0x18; // 0x806DBA1C
    r3 = r29;
    *(0x238 + r29) = r10; // stw @ 0x806DBA24
    *(0x23c + r29) = r29; // stw @ 0x806DBA28
    *(0x240 + r29) = r31; // stw @ 0x806DBA2C
    *(0x244 + r29) = r12; // stw @ 0x806DBA30
    r9 = *(0xc + r30); // lwz @ 0x806DBA34
    r8 = *(4 + r5); // lwz @ 0x806DBA38
    r7 = *(8 + r5); // lwz @ 0x806DBA3C
    *(0x25c + r29) = r7; // stw @ 0x806DBA40
    *(0x24c + r29) = r10; // stw @ 0x806DBA44
    *(0x250 + r29) = r29; // stw @ 0x806DBA48
    *(0x254 + r29) = r9; // stw @ 0x806DBA4C
    *(0x258 + r29) = r8; // stw @ 0x806DBA50
    r6 = *(0x18 + r30); // lwz @ 0x806DBA54
    r5 = *(4 + r4); // lwz @ 0x806DBA58
    r0 = *(8 + r4); // lwz @ 0x806DBA5C
    *(0x270 + r29) = r0; // stw @ 0x806DBA60
    *(0x260 + r29) = r10; // stw @ 0x806DBA64
    *(0x264 + r29) = r29; // stw @ 0x806DBA68
    *(0x268 + r29) = r6; // stw @ 0x806DBA6C
    *(0x26c + r29) = r5; // stw @ 0x806DBA70
    *(0x20 + r1) = r31; // stw @ 0x806DBA74
    r31 = *(0x3c + r1); // lwz @ 0x806DBA78
    r30 = *(0x38 + r1); // lwz @ 0x806DBA7C
    *(0x10 + r1) = r0; // stw @ 0x806DBA80
    r29 = *(0x34 + r1); // lwz @ 0x806DBA84
    r0 = *(0x44 + r1); // lwz @ 0x806DBA88
    *(0x24 + r1) = r12; // stw @ 0x806DBA8C
    *(0x28 + r1) = r11; // stw @ 0x806DBA90
    *(0x14 + r1) = r9; // stw @ 0x806DBA94
    *(0x18 + r1) = r8; // stw @ 0x806DBA98
    *(0x1c + r1) = r7; // stw @ 0x806DBA9C
    *(8 + r1) = r6; // stw @ 0x806DBAA0
    *(0xc + r1) = r5; // stw @ 0x806DBAA4
    return;
}