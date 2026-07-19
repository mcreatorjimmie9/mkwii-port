/* Function at 0x807CE2D8, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_807CE2D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807CE2E4
    r31 = r3;
    r4 = *(0x33c + r3); // lwz @ 0x807CE2EC
    r0 = r4 + 1; // 0x807CE2F0
    *(0x33c + r3) = r0; // stw @ 0x807CE2F4
    FUN_807CB8AC(); // bl 0x807CB8AC
    r3 = r31;
    FUN_807CB7B0(r3); // bl 0x807CB7B0
    r3 = r31;
    FUN_807CB5D8(r3, r3); // bl 0x807CB5D8
    r0 = *(0x349 + r31); // lbz @ 0x807CE30C
    if (==) goto 0x0x807ce328;
    r3 = r31 + 0xb0; // 0x807CE318
    r4 = r31 + 0x250; // 0x807CE31C
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807ce340 */ // 0x807CE324
    r0 = *(0x33c + r31); // lwz @ 0x807CE328
    if (<=) goto 0x0x807ce340;
    r3 = r31 + 0xb0; // 0x807CE334
    r4 = r31 + 0x174; // 0x807CE338
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807CE340
    r31 = *(0xc + r1); // lwz @ 0x807CE344
    return;
}