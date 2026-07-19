/* Function at 0x80642E38, size=228 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_80642E38(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80642E44
    r31 = r3;
    r4 = *(0 + r3); // lwz @ 0x80642E4C
    r4 = *(4 + r4); // lwz @ 0x80642E50
    r0 = *(8 + r4); // lwz @ 0x80642E54
    /* rlwinm. r0, r0, 0, 0x15, 0x15 */ // 0x80642E58
    if (==) goto 0x0x80642f08;
    FUN_8061ECE4(); // bl 0x8061ECE4
    r0 = *(0x1c + r3); // lwz @ 0x80642E64
    r4 = *(0x18 + r3); // lwz @ 0x80642E68
    r0 = r0 rlwinm 0x16; // rlwinm
    r3 = r4 rlwinm 0x16; // rlwinm
    if (==) goto 0x0x80642ed4;
    r3 = *(0 + r31); // lwz @ 0x80642E7C
    r3 = *(4 + r3); // lwz @ 0x80642E80
    r0 = *(8 + r3); // lwz @ 0x80642E84
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x80642E88
    if (!=) goto 0x0x80642ed4;
    r3 = r31;
    FUN_8061ECC8(r3); // bl 0x8061ECC8
    r3 = *(0xa1 + r3); // lbz @ 0x80642E98
    *(0x7a + r31) = r3; // stb @ 0x80642E9C
    if (>=) goto 0x0x80642eb0;
    /* li r3, 1 */ // 0x80642EA8
    /* b 0x80642ebc */ // 0x80642EAC
    if (<=) goto 0x0x80642ebc;
    /* li r3, 4 */ // 0x80642EB8
    /* clrlwi r0, r3, 0x18 */ // 0x80642EBC
    *(0x7a + r31) = r3; // stb @ 0x80642EC0
    r4 = *(0x4c + r31); // lwz @ 0x80642EC4
    r3 = r31;
    /* extsb r5, r0 */ // 0x80642ECC
    FUN_80643A88(r3); // bl 0x80643A88
    r4 = *(0 + r31); // lwz @ 0x80642ED4
    r3 = *(4 + r4); // lwz @ 0x80642ED8
    r0 = *(0x1c + r3); // lwz @ 0x80642EDC
    if (!=) goto 0x0x80642f08;
    r3 = *(4 + r4); // lwz @ 0x80642EE8
    r0 = *(8 + r3); // lwz @ 0x80642EEC
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x80642EF0
    if (!=) goto 0x0x80642f08;
    r3 = r31;
    FUN_8061E01C(r3); // bl 0x8061E01C
    /* li r4, 3 */ // 0x80642F00
    FUN_808F4CC0(r3, r4); // bl 0x808F4CC0
    r0 = *(0x14 + r1); // lwz @ 0x80642F08
    r31 = *(0xc + r1); // lwz @ 0x80642F0C
    return;
}