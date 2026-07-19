/* Function at 0x80785E9C, size=80 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_80785E9C(int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* lis r10, 0 */ // 0x80785EA4
    /* li r6, 1 */ // 0x80785EA8
    *(0x24 + r1) = r0; // stw @ 0x80785EAC
    r9 = *(0xc + r10); // lwz @ 0x80785EBC
    r8 = *(0x10 + r10); // lwz @ 0x80785EC4
    r0 = *(0x14 + r10); // lbz @ 0x80785EC8
    *(0x10 + r1) = r9; // stw @ 0x80785ECC
    *(0xc + r1) = r8; // stw @ 0x80785ED0
    *(8 + r1) = r0; // stb @ 0x80785ED4
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x80785EDC
    return;
}