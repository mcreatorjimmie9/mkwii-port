/* Function at 0x80765964, size=144 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

void FUN_80765964(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r7, 0 */ // 0x8076596C
    /* lis r11, 0 */ // 0x80765970
    *(0x44 + r1) = r0; // stw @ 0x80765974
    /* li r6, 4 */ // 0x80765980
    *(0x3c + r1) = r31; // stw @ 0x80765984
    *(0x38 + r1) = r30; // stw @ 0x80765988
    *(0x34 + r1) = r29; // stw @ 0x8076598C
    r29 = *(0 + r7); // lwzu @ 0x80765990
    r10 = *(0 + r11); // lwzu @ 0x80765994
    r30 = *(4 + r7); // lwz @ 0x80765998
    r31 = *(8 + r7); // lwz @ 0x8076599C
    r12 = *(0xc + r7); // lwz @ 0x807659A0
    /* li r7, 0 */ // 0x807659A4
    r9 = *(4 + r11); // lwz @ 0x807659A8
    r8 = *(8 + r11); // lwz @ 0x807659AC
    r0 = *(0xc + r11); // lwz @ 0x807659B0
    *(0x18 + r1) = r29; // stw @ 0x807659B4
    *(0x1c + r1) = r30; // stw @ 0x807659B8
    *(0x20 + r1) = r31; // stw @ 0x807659BC
    *(0x24 + r1) = r12; // stw @ 0x807659C0
    *(8 + r1) = r10; // stw @ 0x807659C4
    *(0xc + r1) = r9; // stw @ 0x807659C8
    *(0x10 + r1) = r8; // stw @ 0x807659CC
    *(0x14 + r1) = r0; // stw @ 0x807659D0
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x44 + r1); // lwz @ 0x807659D8
    r31 = *(0x3c + r1); // lwz @ 0x807659DC
    r30 = *(0x38 + r1); // lwz @ 0x807659E0
    r29 = *(0x34 + r1); // lwz @ 0x807659E4
    return;
}