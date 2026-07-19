/* Function at 0x8084F664, size=68 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_8084F664(int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* lis r9, 0 */ // 0x8084F66C
    /* li r6, 1 */ // 0x8084F670
    *(0x24 + r1) = r0; // stw @ 0x8084F674
    r8 = *(0 + r9); // lwzu @ 0x8084F67C
    *(8 + r1) = r8; // stw @ 0x8084F680
    r7 = *(4 + r9); // lwz @ 0x8084F684
    r0 = *(8 + r9); // lwz @ 0x8084F688
    *(0xc + r1) = r7; // stw @ 0x8084F68C
    *(0x10 + r1) = r0; // stw @ 0x8084F690
    FUN_8084F6F8(); // bl 0x8084F6F8
    r0 = *(0x24 + r1); // lwz @ 0x8084F698
    return;
}