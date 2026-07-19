/* Function at 0x806AF164, size=260 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_806AF164(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xd8 + r1) = r30; // stw @ 0x806AF174
    r30 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x806AF17C
    if (!=) goto 0x0x806af250;
    /* lis r3, 0 */ // 0x806AF188
    r3 = *(0 + r3); // lwz @ 0x806AF18C
    r3 = *(0 + r3); // lwz @ 0x806AF190
    r0 = *(0 + r3); // lwz @ 0x806AF194
    if (<) goto 0x0x806af1a8;
    if (<=) goto 0x0x806af1b8;
    if (<) goto 0x0x806af250;
    if (>) goto 0x0x806af250;
    /* lis r3, 0 */ // 0x806AF1B8
    r3 = *(0 + r3); // lwz @ 0x806AF1BC
    FUN_805C123C(r3); // bl 0x805C123C
    r3 = r30 + 0x630; // 0x806AF1C4
    FUN_806AEB28(r3, r3); // bl 0x806AEB28
    r0 = *(0x6b0 + r30); // lbz @ 0x806AF1CC
    if (==) goto 0x0x806af1e8;
    r3 = r30 + 0x44; // 0x806AF1D8
    /* li r4, 2 */ // 0x806AF1DC
    FUN_8066A380(r3, r4); // bl 0x8066A380
    /* b 0x806af1f4 */ // 0x806AF1E4
    r3 = r30 + 0x44; // 0x806AF1E8
    /* li r4, 1 */ // 0x806AF1EC
    FUN_8066A380(r4, r3, r4); // bl 0x8066A380
    /* lis r31, 0 */ // 0x806AF1F4
    r3 = *(0 + r31); // lwz @ 0x806AF1F8
    r0 = *(0x291c + r3); // lwz @ 0x806AF1FC
    /* mulli r0, r0, 0x58 */ // 0x806AF200
    r3 = r3 + r0; // 0x806AF204
    r0 = *(0x40 + r3); // lwz @ 0x806AF208
    if (<) goto 0x0x806af248;
    FUN_80654ECC(r3); // bl 0x80654ECC
    r6 = *(0 + r31); // lwz @ 0x806AF21C
    r3 = r30 + 0x268; // 0x806AF220
    /* li r4, 0x407 */ // 0x806AF228
    r0 = *(0x291c + r6); // lwz @ 0x806AF22C
    /* mulli r0, r0, 0x58 */ // 0x806AF230
    r6 = r6 + r0; // 0x806AF234
    r0 = *(0x44 + r6); // lwz @ 0x806AF238
    *(8 + r1) = r0; // stw @ 0x806AF23C
    FUN_806A0A34(); // bl 0x806A0A34
    /* b 0x806af250 */ // 0x806AF244
    r3 = r30 + 0x268; // 0x806AF248
    FUN_806A0C48(r3); // bl 0x806A0C48
    r0 = *(0xe4 + r1); // lwz @ 0x806AF250
    r31 = *(0xdc + r1); // lwz @ 0x806AF254
    r30 = *(0xd8 + r1); // lwz @ 0x806AF258
    return;
}