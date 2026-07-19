/* Function at 0x8067D98C, size=120 bytes */
/* Stack frame: 64 bytes */
/* Calls: 3 function(s) */

int FUN_8067D98C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    r4 = r3;
    *(0x44 + r1) = r0; // stw @ 0x8067D998
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r10, 0 */ // 0x8067D9A4
    r7 = *(0 + r10); // lwzu @ 0x8067D9A8
    /* lis r6, 0 */ // 0x8067D9AC
    *(8 + r1) = r7; // stw @ 0x8067D9B0
    r9 = *(4 + r10); // lwz @ 0x8067D9B4
    r6 = r6 + 0; // 0x8067D9B8
    r8 = *(8 + r10); // lwz @ 0x8067D9BC
    r0 = *(0xc + r10); // lwz @ 0x8067D9C4
    r4 = r6 + 0x5d; // 0x8067D9C8
    r5 = r6 + 0x65; // 0x8067D9CC
    *(0xc + r1) = r9; // stw @ 0x8067D9D0
    r6 = r6 + 0x71; // 0x8067D9D4
    *(0x10 + r1) = r8; // stw @ 0x8067D9DC
    *(0x14 + r1) = r0; // stw @ 0x8067D9E0
    FUN_8064E36C(r6, r7); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8067D9EC
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0x44 + r1); // lwz @ 0x8067D9F4
    return;
}