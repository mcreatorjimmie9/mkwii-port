/* Function at 0x806B8124, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806B8124(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806B8134
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806B813C
    r30 = r3;
    if (==) goto 0x0x806b8194;
    /* li r4, -1 */ // 0x806B8148
    r3 = r3 + 0x494; // 0x806B814C
    FUN_8066D2B4(r4, r3); // bl 0x8066D2B4
    r3 = r30 + 0x320; // 0x806B8154
    /* li r4, -1 */ // 0x806B8158
    FUN_80670FE0(r4, r3, r3, r4); // bl 0x80670FE0
    r3 = r30 + 0x19c; // 0x806B8160
    /* li r4, -1 */ // 0x806B8164
    FUN_80670AB8(r3, r4, r3, r4); // bl 0x80670AB8
    r3 = r30 + 0x58; // 0x806B816C
    /* li r4, -1 */ // 0x806B8170
    FUN_806688C8(r3, r4, r3, r4); // bl 0x806688C8
    r3 = r30;
    /* li r4, 0 */ // 0x806B817C
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806b8194;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806B8198
    r30 = *(8 + r1); // lwz @ 0x806B819C
    r0 = *(0x14 + r1); // lwz @ 0x806B81A0
    return;
}