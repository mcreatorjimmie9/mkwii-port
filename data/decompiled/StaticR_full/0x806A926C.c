/* Function at 0x806A926C, size=784 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806A926C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806A9274
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806A9284
    *(0x14 + r1) = r29; // stw @ 0x806A9288
    r3 = *(0 + r4); // lwz @ 0x806A928C
    r3 = *(0 + r3); // lwz @ 0x806A9290
    r29 = *(0x228 + r3); // lwz @ 0x806A9294
    if (!=) goto 0x0x806a92a8;
    /* li r29, 0 */ // 0x806A92A0
    /* b 0x806a92fc */ // 0x806A92A4
    /* lis r30, 0 */ // 0x806A92A8
    r30 = r30 + 0; // 0x806A92AC
    if (==) goto 0x0x806a92f8;
    r12 = *(0 + r29); // lwz @ 0x806A92B4
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806A92BC
    /* mtctr r12 */ // 0x806A92C0
    /* bctrl  */ // 0x806A92C4
    /* b 0x806a92e0 */ // 0x806A92C8
    if (!=) goto 0x0x806a92dc;
    /* li r0, 1 */ // 0x806A92D4
    /* b 0x806a92ec */ // 0x806A92D8
    r3 = *(0 + r3); // lwz @ 0x806A92DC
    if (!=) goto 0x0x806a92cc;
    /* li r0, 0 */ // 0x806A92E8
    if (==) goto 0x0x806a92f8;
    /* b 0x806a92fc */ // 0x806A92F4
    /* li r29, 0 */ // 0x806A92F8
    if (==) goto 0x0x806a930c;
    /* li r0, 1 */ // 0x806A9304
    *(0x54 + r29) = r0; // stb @ 0x806A9308
    /* lis r30, 0 */ // 0x806A930C
    r3 = *(0 + r30); // lwz @ 0x806A9310
    r3 = *(0 + r3); // lwz @ 0x806A9314
    r3 = *(0x404 + r3); // lwz @ 0x806A9318
    FUN_806598EC(); // bl 0x806598EC
    /* li r0, 6 */ // 0x806A9320
    *(0x58 + r31) = r0; // stw @ 0x806A9324
    r3 = *(0 + r30); // lwz @ 0x806A9328
    r3 = *(0 + r3); // lwz @ 0x806A932C
    r0 = *(0 + r3); // lwz @ 0x806A9330
    if (<) goto 0x0x806a9344;
    if (<=) goto 0x0x806a93cc;
    if (<) goto 0x0x806a9354;
    if (<=) goto 0x0x806a93cc;
    r29 = *(0x25c + r3); // lwz @ 0x806A9354
    if (!=) goto 0x0x806a9368;
    /* li r29, 0 */ // 0x806A9360
    /* b 0x806a93bc */ // 0x806A9364
    /* lis r30, 0 */ // 0x806A9368
    r30 = r30 + 0; // 0x806A936C
    if (==) goto 0x0x806a93b8;
    r12 = *(0 + r29); // lwz @ 0x806A9374
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806A937C
    /* mtctr r12 */ // 0x806A9380
    /* bctrl  */ // 0x806A9384
    /* b 0x806a93a0 */ // 0x806A9388
    if (!=) goto 0x0x806a939c;
    /* li r0, 1 */ // 0x806A9394
    /* b 0x806a93ac */ // 0x806A9398
    r3 = *(0 + r3); // lwz @ 0x806A939C
    if (!=) goto 0x0x806a938c;
    /* li r0, 0 */ // 0x806A93A8
    if (==) goto 0x0x806a93b8;
    /* b 0x806a93bc */ // 0x806A93B4
    /* li r29, 0 */ // 0x806A93B8
    if (==) goto 0x0x806a93cc;
    r3 = r29;
    FUN_806642AC(r3); // bl 0x806642AC
    /* lis r3, 0 */ // 0x806A93CC
    r3 = *(0 + r3); // lwz @ 0x806A93D0
    r3 = *(0 + r3); // lwz @ 0x806A93D4
    r29 = *(0x148 + r3); // lwz @ 0x806A93D8
    if (!=) goto 0x0x806a93ec;
    /* li r29, 0 */ // 0x806A93E4
    /* b 0x806a9440 */ // 0x806A93E8
    /* lis r30, 0 */ // 0x806A93EC
    r30 = r30 + 0; // 0x806A93F0
    if (==) goto 0x0x806a943c;
    r12 = *(0 + r29); // lwz @ 0x806A93F8
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806A9400
    /* mtctr r12 */ // 0x806A9404
    /* bctrl  */ // 0x806A9408
    /* b 0x806a9424 */ // 0x806A940C
    if (!=) goto 0x0x806a9420;
    /* li r0, 1 */ // 0x806A9418
    /* b 0x806a9430 */ // 0x806A941C
    r3 = *(0 + r3); // lwz @ 0x806A9420
    if (!=) goto 0x0x806a9410;
    /* li r0, 0 */ // 0x806A942C
    if (==) goto 0x0x806a943c;
    /* b 0x806a9440 */ // 0x806A9438
    /* li r29, 0 */ // 0x806A943C
    r12 = *(0 + r29); // lwz @ 0x806A9440
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806A9448
    /* mtctr r12 */ // 0x806A944C
    /* bctrl  */ // 0x806A9450
    /* lis r3, 0 */ // 0x806A9454
    r3 = *(0 + r3); // lwz @ 0x806A9458
    r3 = *(0 + r3); // lwz @ 0x806A945C
    r0 = *(0 + r3); // lwz @ 0x806A9460
    if (==) goto 0x0x806a9518;
    if (>=) goto 0x0x806a94b0;
    if (>=) goto 0x0x806a9498;
    if (>=) goto 0x0x806a948c;
    if (>=) goto 0x0x806a94e8;
    /* b 0x806a9518 */ // 0x806A9488
    if (>=) goto 0x0x806a94f0;
    /* b 0x806a9518 */ // 0x806A9494
    if (==) goto 0x0x806a9518;
    if (>=) goto 0x0x806a9508;
    if (>=) goto 0x0x806a9500;
    /* b 0x806a9518 */ // 0x806A94AC
    if (>=) goto 0x0x806a94d0;
    if (==) goto 0x0x806a9510;
    if (>=) goto 0x0x806a9518;
    if (>=) goto 0x0x806a9518;
    /* b 0x806a94f8 */ // 0x806A94CC
    if (==) goto 0x0x806a94f8;
    if (>=) goto 0x0x806a9518;
    if (>=) goto 0x0x806a9518;
    /* b 0x806a9500 */ // 0x806A94E4
    /* li r4, 0x7f1 */ // 0x806A94E8
    /* b 0x806a951c */ // 0x806A94EC
    /* li r4, 0x7f2 */ // 0x806A94F0
    /* b 0x806a951c */ // 0x806A94F4
    /* li r4, 0x13ba */ // 0x806A94F8
    /* b 0x806a951c */ // 0x806A94FC
    /* li r4, 0 */ // 0x806A9500
    /* b 0x806a951c */ // 0x806A9504
    /* li r4, 0xfa3 */ // 0x806A9508
    /* b 0x806a951c */ // 0x806A950C
    /* li r4, 0x19cd */ // 0x806A9510
    /* b 0x806a951c */ // 0x806A9514
    /* li r4, 0 */ // 0x806A9518
    r3 = r29;
    /* li r5, 0 */ // 0x806A9520
    FUN_806496F0(r4, r4, r3, r5); // bl 0x806496F0
    r12 = *(0 + r29); // lwz @ 0x806A9528
    r3 = r29;
    /* li r4, 0xfaa */ // 0x806A9530
    /* li r5, 0 */ // 0x806A9534
    r12 = *(0x68 + r12); // lwz @ 0x806A9538
    /* mtctr r12 */ // 0x806A953C
    /* bctrl  */ // 0x806A9540
    r12 = *(0 + r31); // lwz @ 0x806A9544
    r3 = r31;
    /* li r4, 0x50 */ // 0x806A954C
    /* li r5, 0 */ // 0x806A9550
    r12 = *(0x24 + r12); // lwz @ 0x806A9554
    /* mtctr r12 */ // 0x806A9558
    /* bctrl  */ // 0x806A955C
    r0 = *(0x24 + r1); // lwz @ 0x806A9560
    r31 = *(0x1c + r1); // lwz @ 0x806A9564
    r30 = *(0x18 + r1); // lwz @ 0x806A9568
    r29 = *(0x14 + r1); // lwz @ 0x806A956C
    return;
}