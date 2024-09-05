object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 442
  ClientWidth = 799
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Menu = MainMenu1
  TextHeight = 15
  object Label1: TLabel
    Left = 128
    Top = 41
    Width = 13
    Height = 25
    Caption = 'A'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 80
    Top = 214
    Width = 17
    Height = 25
    Caption = 'm'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 184
    Top = 214
    Width = 12
    Height = 25
    Caption = 'n'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 32
    Top = 107
    Width = 11
    Height = 25
    Caption = 'k'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 368
    Top = 41
    Width = 12
    Height = 25
    Caption = 'B'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label6: TLabel
    Left = 320
    Top = 214
    Width = 17
    Height = 25
    Caption = 'm'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label7: TLabel
    Left = 424
    Top = 214
    Width = 12
    Height = 25
    Caption = 'n'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label8: TLabel
    Left = 272
    Top = 107
    Width = 11
    Height = 25
    Caption = 'h'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label9: TLabel
    Left = 608
    Top = 41
    Width = 12
    Height = 25
    Caption = 'C'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object SGA: TStringGrid
    Left = 64
    Top = 72
    Width = 169
    Height = 145
    ColCount = 1
    DefaultColWidth = 30
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 0
  end
  object EmA: TEdit
    Left = 64
    Top = 236
    Width = 65
    Height = 23
    TabOrder = 1
  end
  object EnA: TEdit
    Left = 168
    Top = 236
    Width = 65
    Height = 23
    TabOrder = 2
  end
  object Button1: TButton
    Left = 96
    Top = 265
    Width = 100
    Height = 25
    Caption = 'Dimensionar A'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Ek: TEdit
    Left = 24
    Top = 128
    Width = 34
    Height = 23
    TabOrder = 4
  end
  object SGB: TStringGrid
    Left = 304
    Top = 72
    Width = 169
    Height = 145
    ColCount = 1
    DefaultColWidth = 30
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 5
  end
  object EmB: TEdit
    Left = 304
    Top = 236
    Width = 65
    Height = 23
    TabOrder = 6
  end
  object EnB: TEdit
    Left = 408
    Top = 236
    Width = 65
    Height = 23
    TabOrder = 7
  end
  object Button2: TButton
    Left = 336
    Top = 265
    Width = 100
    Height = 25
    Caption = 'Dimensionar B'
    TabOrder = 8
    OnClick = Button2Click
  end
  object Eh: TEdit
    Left = 264
    Top = 128
    Width = 34
    Height = 23
    TabOrder = 9
  end
  object SGC: TStringGrid
    Left = 537
    Top = 72
    Width = 169
    Height = 145
    ColCount = 1
    DefaultColWidth = 30
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 10
  end
  object resultado: TEdit
    Left = 480
    Top = 368
    Width = 121
    Height = 23
    ImeName = 'resultado'
    TabOrder = 11
  end
  object Button3: TButton
    Left = 112
    Top = 367
    Width = 315
    Height = 25
    Caption = 'verificar si hay una sub matriz'
    TabOrder = 12
    OnClick = Button3Click
  end
  object MainMenu1: TMainMenu
    Left = 520
    Top = 296
    object Procedimientos1: TMenuItem
      Caption = 'Procedimientos'
      object OperacionesMatriciales1: TMenuItem
        Caption = 'Operaciones Matriciales'
        object kA1: TMenuItem
          Caption = 'kA'
          OnClick = kA1Click
        end
        object hB1: TMenuItem
          Caption = 'hB'
        end
        object hB2: TMenuItem
          Caption = 'At'
          OnClick = hB2Click
        end
        object Bt1: TMenuItem
          Caption = 'Bt'
        end
        object Bt2: TMenuItem
          Caption = 'A+B'
          OnClick = Bt2Click
        end
        object kAhB1: TMenuItem
          Caption = 'kA+hB'
        end
        object BxB1: TMenuItem
          Caption = 'AxB'
          OnClick = BxB1Click
        end
        object kAxhB1: TMenuItem
          Caption = 'kAxhB'
        end
      end
      object OperacionesElementales1: TMenuItem
        Caption = 'Operaciones Elementales'
        object PermutacionFilas1: TMenuItem
          Caption = 'Permutacion Filas'
        end
        object PermutacionFilas2: TMenuItem
          Caption = 'Multiplicacion Fila Escalar'
        end
        object AdicionFila1: TMenuItem
          Caption = 'Adicion Fila'
        end
      end
    end
    object Procedimientos2: TMenuItem
      Caption = 'Funciones'
      object Determintant1: TMenuItem
        Caption = 'Determintante'
      end
    end
  end
end
