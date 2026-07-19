/* Function at 0x80621C30, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80621C30(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80621C38
    *(0x14 + r1) = r0; // stw @ 0x80621C3C
    /* li r0, 0 */ // 0x80621C40
    /* lfs f0, 0(r5) */ // 0x80621C44
    /* lis r5, 0 */ // 0x80621C48
    *(0xc + r1) = r31; // stw @ 0x80621C4C
    r5 = r5 + 0; // 0x80621C50
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80621C58
    r30 = r3;
    *(0 + r3) = r5; // stw @ 0x80621C60
    *(4 + r3) = r0; // stw @ 0x80621C64
    *(8 + r3) = r0; // stw @ 0x80621C68
    *(0xc + r3) = r0; // stw @ 0x80621C6C
    *(0x10 + r3) = r0; // stw @ 0x80621C70
    *(0x14 + r3) = r0; // stw @ 0x80621C74
    *(0x1c + r3) = r0; // stw @ 0x80621C78
    /* stfs f0, 0x24(r3) */ // 0x80621C7C
    *(0x80 + r3) = r0; // stw @ 0x80621C80
    *(0xa0 + r3) = r0; // stw @ 0x80621C84
    /* stfs f0, 0x30(r3) */ // 0x80621C88
    /* stfs f0, 0x2c(r3) */ // 0x80621C8C
    /* stfs f0, 0x28(r3) */ // 0x80621C90
    /* li r3, 0xc */ // 0x80621C94
    FUN_805E3430(r3); // bl 0x805E3430
}