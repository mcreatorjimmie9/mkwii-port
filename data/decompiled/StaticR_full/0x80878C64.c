/* Function at 0x80878C64, size=144 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80878C64(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80878C6C
    FUN_80876FEC(); // bl 0x80876FEC
    /* lis r4, 0 */ // 0x80878C74
    /* clrlwi r5, r3, 0x18 */ // 0x80878C78
    r3 = *(0 + r4); // lwz @ 0x80878C7C
    r0 = *(0x20 + r3); // lwz @ 0x80878C80
    if (!=) goto 0x0x80878c94;
    /* li r3, 0 */ // 0x80878C8C
    /* b 0x80878ce4 */ // 0x80878C90
    /* lis r3, 0 */ // 0x80878C94
    r3 = *(0 + r3); // lwz @ 0x80878C98
    /* mulli r0, r5, 0x248 */ // 0x80878C9C
    r3 = *(0x14 + r3); // lwz @ 0x80878CA0
    r3 = r3 + r0; // 0x80878CA4
    r0 = *(0x8c + r3); // lwz @ 0x80878CA8
    if (==) goto 0x0x80878cbc;
    /* li r3, 1 */ // 0x80878CB4
    /* b 0x80878ce4 */ // 0x80878CB8
    r0 = *(0x58 + r3); // lwz @ 0x80878CBC
    if (==) goto 0x0x80878cd0;
    /* li r3, 1 */ // 0x80878CC8
    /* b 0x80878ce4 */ // 0x80878CCC
    r4 = *(0x78 + r3); // lwz @ 0x80878CD0
    /* subfic r3, r4, 0x14 */ // 0x80878CD4
    r0 = r4 + -0x14; // 0x80878CD8
    r0 = r3 | r0; // 0x80878CDC
    /* srwi r3, r0, 0x1f */ // 0x80878CE0
    r0 = *(0x14 + r1); // lwz @ 0x80878CE4
    return;
}