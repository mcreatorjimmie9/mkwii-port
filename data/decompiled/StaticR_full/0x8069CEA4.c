/* Function at 0x8069CEA4, size=256 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_8069CEA4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x8069CEB4
    *(0xd8 + r1) = r30; // stw @ 0x8069CEB8
    r30 = r3;
    r3 = *(0x1880 + r3); // lwz @ 0x8069CEC0
    FUN_80661194(); // bl 0x80661194
    if (==) goto 0x0x8069cee4;
    r3 = *(0x1884 + r30); // lwz @ 0x8069CED0
    FUN_806611CC(); // bl 0x806611CC
    if (==) goto 0x0x8069cee4;
    /* li r31, 1 */ // 0x8069CEE0
    if (==) goto 0x0x8069cf8c;
    r4 = *(0x191c + r30); // lwz @ 0x8069CEEC
    r3 = *(0x1918 + r30); // lwz @ 0x8069CEF0
    r4 = r4 + 1; // 0x8069CEF4
    *(0x191c + r30) = r4; // stw @ 0x8069CEF8
    r0 = *(0x260 + r3); // lwz @ 0x8069CEFC
    if (<) goto 0x0x8069cf10;
    /* li r0, 0 */ // 0x8069CF08
    *(0x191c + r30) = r0; // stw @ 0x8069CF0C
    r3 = *(0x1880 + r30); // lwz @ 0x8069CF10
    /* li r4, 1 */ // 0x8069CF14
    FUN_80661064(r4); // bl 0x80661064
    r4 = *(0x1880 + r30); // lwz @ 0x8069CF1C
    r0 = *(0x1884 + r30); // lwz @ 0x8069CF20
    *(0x1880 + r30) = r0; // stw @ 0x8069CF24
    r3 = *(0x1918 + r30); // lwz @ 0x8069CF28
    *(0x1884 + r30) = r4; // stw @ 0x8069CF2C
    r4 = *(0x191c + r30); // lwz @ 0x8069CF30
    FUN_806607EC(); // bl 0x806607EC
    r31 = r3;
    r3 = *(0x1918 + r30); // lwz @ 0x8069CF3C
    r4 = *(0x191c + r30); // lwz @ 0x8069CF40
    FUN_806607C4(); // bl 0x806607C4
    r4 = r3;
    r3 = *(0x1880 + r30); // lwz @ 0x8069CF4C
    r5 = r31;
    /* li r6, 1 */ // 0x8069CF54
    FUN_80661004(r4, r5, r6); // bl 0x80661004
    FUN_80654ECC(r5, r6, r3); // bl 0x80654ECC
    r6 = *(0x191c + r30); // lwz @ 0x8069CF64
    r3 = r30 + 0xdac; // 0x8069CF68
    /* li r4, 0x7d9 */ // 0x8069CF70
    r0 = r6 + 1; // 0x8069CF74
    *(8 + r1) = r0; // stw @ 0x8069CF78
    r6 = *(0x1918 + r30); // lwz @ 0x8069CF7C
    r0 = *(0x260 + r6); // lwz @ 0x8069CF80
    *(0xc + r1) = r0; // stw @ 0x8069CF84
    FUN_806A0A34(); // bl 0x806A0A34
    r0 = *(0xe4 + r1); // lwz @ 0x8069CF8C
    r31 = *(0xdc + r1); // lwz @ 0x8069CF90
    r30 = *(0xd8 + r1); // lwz @ 0x8069CF94
    return;
}