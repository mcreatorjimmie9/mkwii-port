/* Function at 0x807082D4, size=104 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

void FUN_807082D4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807082DC
    r0 = *(0x64c + r3); // lbz @ 0x807082E0
    if (==) goto 0x0x80708304;
    /* lis r3, 0 */ // 0x807082EC
    /* li r4, 0x7e */ // 0x807082F0
    r3 = *(0 + r3); // lwz @ 0x807082F4
    /* li r5, 0 */ // 0x807082F8
    FUN_80698C44(r3, r4, r5); // bl 0x80698C44
    /* b 0x80708318 */ // 0x80708300
    /* lis r3, 0 */ // 0x80708304
    /* li r4, 0x7a */ // 0x80708308
    r3 = *(0 + r3); // lwz @ 0x8070830C
    /* li r5, 0 */ // 0x80708310
    FUN_80698C44(r3, r4, r5); // bl 0x80698C44
    /* lis r3, 0 */ // 0x80708318
    /* li r4, 0 */ // 0x8070831C
    r3 = *(0 + r3); // lwz @ 0x80708320
    /* li r5, 0xff */ // 0x80708324
    FUN_80698CD0(r3, r4, r5); // bl 0x80698CD0
    r0 = *(0x14 + r1); // lwz @ 0x8070832C
    return;
}