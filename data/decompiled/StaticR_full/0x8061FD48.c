/* Function at 0x8061FD48, size=140 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

int FUN_8061FD48(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x8061FD50
    r5 = r5 + 0; // 0x8061FD58
    *(0x14 + r1) = r0; // stw @ 0x8061FD5C
    r4 = r5 + 0x196; // 0x8061FD60
    if (==) goto 0x0x8061fd90;
    r3 = r5 + 0x1ad; // 0x8061FD68
    /* crclr cr1eq */ // 0x8061FD6C
    FUN_8063803C(r4, r3); // bl 0x8063803C
    /* lis r4, 0 */ // 0x8061FD74
    r5 = r3;
    r3 = *(0 + r4); // lwz @ 0x8061FD7C
    /* li r4, 2 */ // 0x8061FD80
    /* li r6, 0 */ // 0x8061FD84
    FUN_805CFD60(r4, r5, r4, r6); // bl 0x805CFD60
    /* b 0x8061fda8 */ // 0x8061FD8C
    /* lis r3, 0 */ // 0x8061FD90
    r5 = r4;
    r3 = *(0 + r3); // lwz @ 0x8061FD98
    /* li r4, 0 */ // 0x8061FD9C
    /* li r6, 0 */ // 0x8061FDA0
    FUN_805CFD60(r3, r5, r4, r6); // bl 0x805CFD60
    /* lis r4, 0 */ // 0x8061FDA8
    *(0 + r4) = r3; // stw @ 0x8061FDB0
    if (==) goto 0x0x8061fdc4;
    /* lis r4, 0 */ // 0x8061FDB8
    r0 = r3 + 4; // 0x8061FDBC
    *(0 + r4) = r0; // stw @ 0x8061FDC0
    r0 = *(0x14 + r1); // lwz @ 0x8061FDC4
    return;
}