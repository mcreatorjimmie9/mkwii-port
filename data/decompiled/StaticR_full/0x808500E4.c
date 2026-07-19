/* Function at 0x808500E4, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808500E4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    /* clrlwi r4, r4, 0x10 */ // 0x808500FC
    *(0x14 + r1) = r29; // stw @ 0x80850100
    r29 = r3;
    r5 = *(0x6c + r3); // lwz @ 0x80850108
    r3 = *(0x28 + r5); // lwz @ 0x8085010C
    FUN_805E6F54(); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x80850114
    if (!=) goto 0x0x80850128;
    /* li r3, 0 */ // 0x80850120
    /* b 0x808501b0 */ // 0x80850124
    r3 = *(0x6c + r29); // lwz @ 0x80850128
    /* clrlwi r4, r30, 0x10 */ // 0x8085012C
    r3 = *(0x28 + r3); // lwz @ 0x80850130
    FUN_805E6F54(r3); // bl 0x805E6F54
    r31 = *(0xc + r3); // lwz @ 0x80850138
    /* li r30, 0 */ // 0x8085013C
    if (==) goto 0x0x80850178;
    /* lis r4, 0 */ // 0x80850148
    r3 = r31;
    r4 = r4 + 0; // 0x80850150
    *(0xc + r1) = r4; // stw @ 0x80850154
    r12 = *(0 + r31); // lwz @ 0x8085015C
    r12 = *(8 + r12); // lwz @ 0x80850160
    /* mtctr r12 */ // 0x80850164
    /* bctrl  */ // 0x80850168
    if (==) goto 0x0x80850178;
    /* li r30, 1 */ // 0x80850174
    if (==) goto 0x0x80850184;
    /* b 0x80850188 */ // 0x80850180
    /* li r31, 0 */ // 0x80850184
    r0 = *(0x2c + r31); // lwz @ 0x80850188
    /* lis r3, 0 */ // 0x8085018C
    *(8 + r1) = r0; // stw @ 0x80850190
    /* lfs f1, 0(r3) */ // 0x80850198
    /* li r4, 0 */ // 0x8085019C
    r3 = *(0x108 + r29); // lwz @ 0x808501A0
    /* li r5, 0 */ // 0x808501A4
    FUN_808504CC(r6, r4, r5); // bl 0x808504CC
    /* li r3, 1 */ // 0x808501AC
    r0 = *(0x24 + r1); // lwz @ 0x808501B0
    r31 = *(0x1c + r1); // lwz @ 0x808501B4
    r30 = *(0x18 + r1); // lwz @ 0x808501B8
    r29 = *(0x14 + r1); // lwz @ 0x808501BC
    return;
}