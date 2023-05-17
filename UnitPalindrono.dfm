object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 283
  ClientWidth = 265
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 265
    Height = 283
    Align = alClient
    TabOrder = 0
    ExplicitLeft = 48
    ExplicitTop = 80
    ExplicitWidth = 185
    ExplicitHeight = 41
    object SpeedButton1: TSpeedButton
      AlignWithMargins = True
      Left = 11
      Top = 11
      Width = 243
      Height = 22
      Margins.Left = 10
      Margins.Top = 10
      Margins.Right = 10
      Align = alTop
      Caption = 'Selecione o arquivo de texto'
      OnClick = SpeedButton1Click
      ExplicitLeft = 120
      ExplicitTop = 72
      ExplicitWidth = 23
    end
    object Memo1: TMemo
      AlignWithMargins = True
      Left = 11
      Top = 39
      Width = 243
      Height = 240
      Margins.Left = 10
      Margins.Right = 10
      Align = alClient
      ReadOnly = True
      ScrollBars = ssVertical
      TabOrder = 0
    end
  end
  object OpenDialog: TOpenDialog
    DefaultExt = 'txt'
    Filter = 'TXT|*.txt'
    Left = 128
    Top = 88
  end
end
