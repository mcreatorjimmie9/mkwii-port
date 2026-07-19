/* Function at 0x806519F8, size=224 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806519F8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xd8 + r1) = r30; // stw @ 0x80651A08
    r30 = r3;
    r0 = *(0x1920 + r3); // lwz @ 0x80651A10
    if (!=) goto 0x0x80651ac0;
    r4 = *(0x1918 + r3); // lwz @ 0x80651A1C
    /* addic. r0, r4, -1 */ // 0x80651A20
    *(0x1918 + r3) = r0; // stw @ 0x80651A24
    if (>=) goto 0x0x80651a3c;
    r4 = *(0x1914 + r3); // lwz @ 0x80651A2C
    r4 = *(0x260 + r4); // lwz @ 0x80651A30
    r0 = r4 + -1; // 0x80651A34
    *(0x1918 + r3) = r0; // stw @ 0x80651A38
    r3 = *(0x1880 + r3); // lwz @ 0x80651A3C
    /* li r4, 0 */ // 0x80651A40
    FUN_80661064(r4); // bl 0x80661064
    r4 = *(0x1880 + r30); // lwz @ 0x80651A48
    r0 = *(0x1884 + r30); // lwz @ 0x80651A4C
    *(0x1880 + r30) = r0; // stw @ 0x80651A50
    r3 = *(0x1914 + r30); // lwz @ 0x80651A54
    *(0x1884 + r30) = r4; // stw @ 0x80651A58
    r4 = *(0x1918 + r30); // lwz @ 0x80651A5C
    FUN_806607EC(); // bl 0x806607EC
    r31 = r3;
    r3 = *(0x1914 + r30); // lwz @ 0x80651A68
    r4 = *(0x1918 + r30); // lwz @ 0x80651A6C
    FUN_806607C4(); // bl 0x806607C4
    r4 = r3;
    r3 = *(0x1880 + r30); // lwz @ 0x80651A78
    r5 = r31;
    /* li r6, 0 */ // 0x80651A80
    FUN_80661004(r4, r5, r6); // bl 0x80661004
    FUN_80654ECC(r5, r6, r3); // bl 0x80654ECC
    r6 = *(0x1918 + r30); // lwz @ 0x80651A90
    r3 = r30 + 0xb88; // 0x80651A94
    /* li r4, 0x7d9 */ // 0x80651A9C
    r0 = r6 + 1; // 0x80651AA0
    *(8 + r1) = r0; // stw @ 0x80651AA4
    r6 = *(0x1914 + r30); // lwz @ 0x80651AA8
    r0 = *(0x260 + r6); // lwz @ 0x80651AAC
    *(0xc + r1) = r0; // stw @ 0x80651AB0
    FUN_806A0A34(); // bl 0x806A0A34
    /* li r0, 1 */ // 0x80651AB8
    *(0x1920 + r30) = r0; // stw @ 0x80651ABC
    r0 = *(0xe4 + r1); // lwz @ 0x80651AC0
    r31 = *(0xdc + r1); // lwz @ 0x80651AC4
    r30 = *(0xd8 + r1); // lwz @ 0x80651AC8
    return;
}