/* Function at 0x80823880, size=92 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_80823880(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* li r6, 1 */ // 0x80823888
    *(0x14 + r1) = r0; // stw @ 0x8082388C
    r4 = *(0 + r3); // lwz @ 0x80823890
    r5 = *(4 + r4); // lwz @ 0x80823894
    r0 = *(8 + r5); // lwz @ 0x80823898
    /* andi. r0, r0, 0x102 */ // 0x8082389C
    if (!=) goto 0x0x808238bc;
    /* lis r4, 0x20c */ // 0x808238A4
    r5 = *(0xc + r5); // lwz @ 0x808238A8
    r0 = r4 + 0x6000; // 0x808238AC
    /* and. r0, r5, r0 */ // 0x808238B0
    if (!=) goto 0x0x808238bc;
    /* li r6, 0 */ // 0x808238B8
    if (!=) goto 0x0x808238cc;
    FUN_8061DFF8(r6); // bl 0x8061DFF8
    FUN_8060DE28(r6); // bl 0x8060DE28
    r0 = *(0x14 + r1); // lwz @ 0x808238CC
    return;
}