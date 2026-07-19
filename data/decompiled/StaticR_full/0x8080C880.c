/* Function at 0x8080C880, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8080C880(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8080C890
    /* lfs f0, 0(r31) */ // 0x8080C894
    *(0x18 + r1) = r30; // stw @ 0x8080C898
    r30 = r3;
    r5 = *(0x104 + r3); // lwz @ 0x8080C8A0
    r4 = *(0 + r5); // lwz @ 0x8080C8A8
    r0 = *(4 + r5); // lwz @ 0x8080C8AC
    *(0xc + r1) = r0; // stw @ 0x8080C8B0
    *(8 + r1) = r4; // stw @ 0x8080C8B4
    r0 = *(8 + r5); // lwz @ 0x8080C8B8
    *(0x10 + r1) = r0; // stw @ 0x8080C8BC
    /* stfs f0, 0xc(r1) */ // 0x8080C8C0
    FUN_805E3430(); // bl 0x805E3430
}