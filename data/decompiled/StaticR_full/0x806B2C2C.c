/* Function at 0x806B2C2C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806B2C2C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806B2C34
    /* li r5, 0 */ // 0x806B2C38
    *(0x14 + r1) = r0; // stw @ 0x806B2C3C
    *(0xc + r1) = r31; // stw @ 0x806B2C40
    r31 = r3;
    r3 = r3 + 0x73c; // 0x806B2C48
    FUN_806A0A34(r5, r3); // bl 0x806A0A34
    /* li r3, 0 */ // 0x806B2C50
    /* li r0, -1 */ // 0x806B2C54
    /* li r4, 1 */ // 0x806B2C58
    *(0x8b0 + r31) = r4; // stw @ 0x806B2C5C
    *(0x44 + r31) = r3; // stw @ 0x806B2C60
    *(0x274 + r31) = r0; // stw @ 0x806B2C64
    *(0x48 + r31) = r3; // stw @ 0x806B2C68
    *(0x278 + r31) = r0; // stw @ 0x806B2C6C
    *(0x27c + r31) = r3; // stw @ 0x806B2C70
    r31 = *(0xc + r1); // lwz @ 0x806B2C74
    r0 = *(0x14 + r1); // lwz @ 0x806B2C78
    return;
}